"""Specification for GrapheneOS hardened_malloc quarantine slab configuration order 1696."""

def spec_graphene_hardened_malloc_1696() -> dict:
    return {"system": "GrapheneOS", "spec_id": 1696, "quarantine_slabs": 1, "zero_on_free": True, "canary_size": 16}

def test_spec_graphene_hardened_malloc_1696():
    s = spec_graphene_hardened_malloc_1696()
    assert s["spec_id"] == 1696
