"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 412."""

def spec_graphene_hardened_malloc_412() -> dict:
    return {"system": "GrapheneOS", "spec_id": 412, "quarantine_slabs": 13, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_412():
    s = spec_graphene_hardened_malloc_412()
    assert s["spec_id"] == 412
