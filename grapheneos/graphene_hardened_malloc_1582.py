"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1582."""

def spec_graphene_hardened_malloc_1582() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1582, "quarantine_slabs": 15, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1582():
    s = spec_graphene_hardened_malloc_1582()
    assert s["spec_id"] == 1582
