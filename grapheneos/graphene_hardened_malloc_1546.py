"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1546."""

def spec_graphene_hardened_malloc_1546() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1546, "quarantine_slabs": 11, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1546():
    s = spec_graphene_hardened_malloc_1546()
    assert s["spec_id"] == 1546
